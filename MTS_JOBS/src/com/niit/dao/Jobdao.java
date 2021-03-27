package com.niit.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import com.niit.model.job;
import com.niit.model.user;

public class Jobdao {
	
	Connection con;
	 public Jobdao(Connection con) {
	        this.con = con;
	        
	 }
	 
	 public boolean savejob(job job){
	        boolean set = false;
	        try{
	            //Insert register data to database
	            String query = "insert into job(jobname,applaydate,jobdescription) values(?,?,?)";
	           
	           PreparedStatement pt = this.con.prepareStatement(query);
	           
	           pt.setString(1, job.getJobname());
	           pt.setString(2, job.getApplaydate());
	           pt.setString(3, job.getJobdescription());
	           
	           pt.executeUpdate();
	           set = true;
	        }catch(Exception e){
	            e.printStackTrace();
	 
	        }
			return set;
			
	 }
			public job logUser (String jobname, String applaydate , String jobdescription) {
			    job job = null;
			    	try {
			    		String query = "select * from job ";
			    	    PreparedStatement pst =this.con.prepareStatement(query);
			    		pst.setString(1,jobname);
			    		pst.setString(2,applaydate);
			    		pst.setString(2,jobdescription);
			    		
			    		
			    		ResultSet rs=pst.executeQuery();
			    		if(rs.next()){
			    			job = (job) new job();
			    			
			    			job.setJobname(rs.getString("jobname"));
			    			job.setApplaydate(rs.getString("applaaydate"));
			    			job.setJobdescription(rs.getString("jobdescription"));
			    		
			    		}
			    		
			    	}catch(Exception e) {
			    		e.printStackTrace();
			    	}
			    	return job;
			    }
			    
			    
}