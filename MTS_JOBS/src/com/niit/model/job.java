package com.niit.model;

import java.io.Serializable;

public class job implements Serializable{
	
	int jobid;
	String jobname;
	String applaydate;
	String jobdescription;
	 
	public job() {
		
	}

	public job(int jobid, String jobname, String applaydate, String jobdescription) {
		super();
		this.jobid = jobid;
		this.jobname = jobname;
		this.applaydate = applaydate;
		this.jobdescription = jobdescription;
	}
	
	
	

	public job(String jobname, String applaydate, String jobdescription) {
		super();
		this.jobname = jobname;
		this.applaydate = applaydate;
		this.jobdescription = jobdescription;
	}

	public job(int jobid) {
		super();
		this.jobid = jobid;
	}

	public int getJobid() {
		return jobid;
	}

	public void setJobid(int jobid) {
		this.jobid = jobid;
	}

	public String getJobname() {
		return jobname;
	}

	public void setJobname(String jobname) {
		this.jobname = jobname;
	}

	public String getApplaydate() {
		return applaydate;
	}

	public void setApplaydate(String applaydate) {
		this.applaydate = applaydate;
	}

	public String getJobdescription() {
		return jobdescription;
	}

	public void setJobdescription(String jobdescription) {
		this.jobdescription = jobdescription;
	}
	
	
	

}
