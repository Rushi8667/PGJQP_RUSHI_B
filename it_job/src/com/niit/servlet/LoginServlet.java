package com.niit.servlet;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import newpackage.ConnectionPro;
import newpackage.UserDatabase;
import newpackage.user;

@WebServlet("/LoginServlet")
public class LoginServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

    public LoginServlet() {
        // TODO Auto-generated constructor stub
    }




	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        
        String logemail = request.getParameter("email");
        String logpass = request.getParameter("password");
        
        UserDatabase db =  new UserDatabase(ConnectionPro.getConnection());
        user user = db.logUser(logemail, logpass);
        
        if(user!=null){
            HttpSession session = request.getSession();
            session.setAttribute("logUser", user);
            response.sendRedirect("welcome.jsp");
        }else{
            System.out.println("user not found");
        }

		


	}

}
