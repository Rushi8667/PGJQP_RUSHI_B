package com.niit.dao;
import java.sql.*;

import org.apache.catalina.User;

import com.niit.model.user;


public class UserDatabase {

	 Connection con ;

	    public UserDatabase(Connection con) {
	        this.con = con;
	    }
	    
	    //for register user 
	    public boolean saveUser(user user){
	        boolean set = false;
	        try{
	            //Insert register data to database
	            String query = "insert into user(name,email,password) values(?,?,?)";
	           
	           PreparedStatement pt = this.con.prepareStatement(query);
	           pt.setString(1, user.getName());
	           pt.setString(2, user.getEmail());
	           pt.setString(3, user.getPassword());
	           
	           pt.executeUpdate();
	           set = true;
	        }catch(Exception e){
	            e.printStackTrace();
	        }
	        return set;
	    }
	    
	    //user login
	    public user logUser (String email, String password) {
	     user user = null;
	    	try {
	    		String query = "select * from user where email=? and password=? ";
	    	    PreparedStatement pst =this.con.prepareStatement(query);
	    		pst.setString(1,email);
	    		pst.setString(2,password);
	    		
	    		ResultSet rs=pst.executeQuery();
	    		if(rs.next()){
	    			user = (user) new user();
	    			user.setId(rs.getInt("id"));
	    			user.setName(rs.getString("name"));
	    			user.setEmail(rs.getString("email"));
	    			user.setPassword(rs.getString("pass"));
	    		
	    		}
	    		
	    	}catch(Exception e) {
	    		e.printStackTrace();
	    	}
	    	return user;
	    }
	    
	    
}
