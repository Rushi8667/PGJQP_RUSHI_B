<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>About us</title>
<link href="https://fonts.googleapis.com/css?family=Montserrat" rel="stylesheet">
<link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.2.0/css/all.css" integrity="sha384-hWVjflwFxL6sNzntih27bfxkr27PmbbK/iSvJ+a4+0owXq79v+lsFkW54bOGbiDQ" crossorigin="anonymous">


<link href="css/aboutus.css">
<%@include file="components/common_css.jsp" %>
</head>
<body>
<%@include file="components/navbar.jsp" %>

<!------ Include the above in your HEAD tag ---------->

  
   <main>
    <div class="about">
        <div class="title">
            <h1>About The IT-JOBS</h1>
        </div>
        <div class="desc">
            <p> It is the job provider company, which provied low level to high level jobs on the daily basis.
            IT_JOBS.com is an Indian employment website operating in India and Middle East founded in Feb 2021. IT_JOBS.com was founded by Indian businessman RUSHIKESH BORKAR..</p>
        </div>
    </div>
    <div class="row">
        <div class="card">
            <div class="card_img"> <i class="fas fa-user-astronaut "></i> </div>
            <div class="card_title">LERN</div>
            <div class="card_body">
                <p>Lern The New Skills.</p>
            </div>
        </div>
        <div class="card">
            <div class="card_img"> <i class="fab fa-cloudversify"></i> </div>
            <div class="card_title">APPLY</div>
            <div class="card_body">
                <p>Apply The Skills.</p>
            </div>
        </div>
        <div class="card">
            <div class="card_img"> <i class="fas fa-rocket"></i> </div>
            <div class="card_title">GROW</div>
            <div class="card_body">
                <p>Grow with skills.</p>
            </div>
        </div>
    </div>
    </main>     
</body>
</html>

