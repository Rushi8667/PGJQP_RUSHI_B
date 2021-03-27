package com.niit.servlet;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.niit.connection.ConnectionPro;
import com.niit.dao.Jobdao;
import com.niit.dao.UserDatabase;
import com.niit.model.job;
import com.niit.model.user;

/**
 * Servlet implementation class JobServlet
 */
@WebServlet("/JobServlet")
public class JobServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public JobServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//doGet(request, response);
		
	    String jobname = request.getParameter("jobname");
		String applaydate = request.getParameter("applaydate");
		String jobdescription = request.getParameter("jobdescription");
		
		//make user object
		job job =  new job(  jobname, applaydate,jobdescription);

		

		//create a database model
		Jobdao regjob = new Jobdao(ConnectionPro.getConnection());
		if (regjob.savejob(job)) {
		   response.sendRedirect("login.jsp");
		} else {
		    String errorMessage = "job Available";
		    HttpSession regSession = request.getSession();
		    regSession.setAttribute("RegError", errorMessage);
		    response.sendRedirect("registration.jsp");
		    }	
	}

}
