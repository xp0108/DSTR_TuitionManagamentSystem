#pragma once
#include <iostream>
#include "DataStruc.h"

void GenerateData(Tutor tutor_info[]) {
    tutor_info[0].tutorID = 5;
    tutor_info[0].tutorName = "xp";
    tutor_info[0].dateJoin = "11/05/2021";
    tutor_info[0].dateTerminated = "";
    tutor_info[0].monthlyHour = 10;
    tutor_info[0].hourlyRate = 60;
    tutor_info[0].tutorPhone = "0123456789";
    tutor_info[0].tutorAddress = "Bukit Jalil";
    tutor_info[0].tutionName = "KL";
    tutor_info[0].subjectName = "History";
    tutor_info[0].rating = 0;
    tutor_info[0].payCheck = tutor_info[0].monthlyHour * tutor_info[0].hourlyRate;

    tutor_info[1].tutorID = 99;
    tutor_info[1].tutorName = "Onn";
    tutor_info[1].dateJoin = "11/05/2021";
    tutor_info[1].dateTerminated = "";
    tutor_info[1].monthlyHour = 10;
    tutor_info[1].hourlyRate = 60;
    tutor_info[1].tutorPhone = "0123456789";
    tutor_info[1].tutorAddress = "Bukit Jalil";
    tutor_info[1].tutionName = "KL";
    tutor_info[1].subjectName = "History";
    tutor_info[1].rating = 0;
    tutor_info[1].payCheck = tutor_info[1].monthlyHour * tutor_info[1].hourlyRate;

    tutor_info[2].tutorID = 22;
    tutor_info[2].tutorName = "Khor";
    tutor_info[2].dateJoin = "12/04/2021";
    tutor_info[2].dateTerminated = "";
    tutor_info[2].monthlyHour = 20;
    tutor_info[2].hourlyRate = 40;
    tutor_info[2].tutorPhone = "0174357930";
    tutor_info[2].tutorAddress = "Pagoh";
    tutor_info[2].tutionName = "JOHOR";
    tutor_info[2].subjectName = "English";
    tutor_info[2].rating = 4.5;
    tutor_info[2].payCheck = tutor_info[2].monthlyHour * tutor_info[2].hourlyRate;

    tutor_info[3].tutorID = 33;
    tutor_info[3].tutorName = "Michelle";
    tutor_info[3].dateJoin = "3/02/2020";
    tutor_info[3].dateTerminated = "";
    tutor_info[3].monthlyHour = 10;
    tutor_info[3].hourlyRate = 80;
    tutor_info[3].tutorPhone = "0122930940";
    tutor_info[3].tutorAddress = "Selangor";
    tutor_info[3].tutionName = "KL";
    tutor_info[3].subjectName = "Science";
    tutor_info[3].rating = 5;
    tutor_info[3].payCheck = tutor_info[3].monthlyHour * tutor_info[3].hourlyRate;

    tutor_info[4].tutorID = 44;
    tutor_info[4].tutorName = "Joelle";
    tutor_info[4].dateJoin = "12/12/2020";
    tutor_info[4].dateTerminated = "";
    tutor_info[4].monthlyHour = 0;
    tutor_info[4].hourlyRate = 80;
    tutor_info[4].tutorPhone = "0142240940";
    tutor_info[4].tutorAddress = "Bukit Jalil";
    tutor_info[4].tutionName = "KL";
    tutor_info[4].subjectName = "Math";
    tutor_info[4].rating = 3;
    tutor_info[4].payCheck = tutor_info[4].monthlyHour * tutor_info[4].hourlyRate;

    tutor_info[5].tutorID = 55;
    tutor_info[5].tutorName = "Jennifer";
    tutor_info[5].dateJoin = "19/01/2021";
    tutor_info[5].dateTerminated = "";
    tutor_info[5].monthlyHour = 30;
    tutor_info[5].hourlyRate = 80;
    tutor_info[5].tutorPhone = "0141461425";
    tutor_info[5].tutorAddress = "Kluang";
    tutor_info[5].tutionName = "JOHOR";
    tutor_info[5].subjectName = "Computing";
    tutor_info[5].rating = 4.2;
    tutor_info[5].payCheck = tutor_info[5].monthlyHour * tutor_info[5].hourlyRate;

    tutor_info[6].tutorID = 66;
    tutor_info[6].tutorName = "Larry";
    tutor_info[6].dateJoin = "29/01/2021";
    tutor_info[6].dateTerminated = "";
    tutor_info[6].monthlyHour = 5;
    tutor_info[6].hourlyRate = 40;
    tutor_info[6].tutorPhone = "0126371940";
    tutor_info[6].tutorAddress = "Serdang";
    tutor_info[6].tutionName = "KL";
    tutor_info[6].subjectName = "BM";
    tutor_info[6].rating = 3.5;
    tutor_info[6].payCheck = tutor_info[6].monthlyHour * tutor_info[6].hourlyRate;

    tutor_info[7].tutorID = 77;
    tutor_info[7].tutorName = "Kimmy";
    tutor_info[7].dateJoin = "23/10/2020";
    tutor_info[7].dateTerminated = "";
    tutor_info[7].monthlyHour = 15;
    tutor_info[7].hourlyRate = 60;
    tutor_info[7].tutorPhone = "0126742952";
    tutor_info[7].tutorAddress = "Kulai";
    tutor_info[7].tutionName = "JOHOR";
    tutor_info[7].subjectName = "Economics";
    tutor_info[7].rating = 2.5;
	tutor_info[7].payCheck = tutor_info[7].monthlyHour * tutor_info[7].hourlyRate;

    tutor_info[8].tutorID = 88;
    tutor_info[8].tutorName = "Williams";
    tutor_info[8].dateJoin = "02/07/2021";
    tutor_info[8].dateTerminated = "";
    tutor_info[8].monthlyHour = 34;
    tutor_info[8].hourlyRate = 60;
    tutor_info[8].tutorPhone = "0129378019";
    tutor_info[8].tutorAddress = "Nilai";
    tutor_info[8].tutionName = "KL";
    tutor_info[8].subjectName = "Accounting";
    tutor_info[8].rating = 3.5;
	tutor_info[8].payCheck = tutor_info[8].monthlyHour * tutor_info[8].hourlyRate;

    tutor_info[9].tutorID = 11;
    tutor_info[9].tutorName = "Aaron";
    tutor_info[9].dateJoin = "10/09/2020";
    tutor_info[9].dateTerminated = "";
    tutor_info[9].monthlyHour = 43;
    tutor_info[9].hourlyRate = 40;
    tutor_info[9].tutorPhone = "0149602852";
    tutor_info[9].tutorAddress = "Pontian";
    tutor_info[9].tutionName = "JOHOR";
    tutor_info[9].subjectName = "Mandarin";
    tutor_info[9].rating = 3;
	tutor_info[9].payCheck = tutor_info[9].monthlyHour * tutor_info[9].hourlyRate;

    tutor_info[10].tutorID = 100;
    tutor_info[10].tutorName = "Johnson";
    tutor_info[10].dateJoin = "26/02/2021";
    tutor_info[10].dateTerminated = "";
    tutor_info[10].monthlyHour = 33;
    tutor_info[10].hourlyRate = 80;
    tutor_info[10].tutorPhone = "0128690385";
    tutor_info[10].tutorAddress = "Muar";
    tutor_info[10].tutionName = "JOHOR";
    tutor_info[10].subjectName = "AddMath";
    tutor_info[10].rating = 4.5;
	tutor_info[10].payCheck = tutor_info[10].monthlyHour * tutor_info[10].hourlyRate;
}