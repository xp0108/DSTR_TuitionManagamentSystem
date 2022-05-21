#pragma once
#include <iostream>
#include "DataStruc.h"

void GenerateData(Tutor tutor_info[]) {
    tutor_info[50].tutorID = 30;
    tutor_info[50].tutorName = "Onn";
    tutor_info[50].dateJoin = "11/05/2021";
    tutor_info[50].dateTerminated = "";
    tutor_info[50].hourlyRate = 60;
    tutor_info[50].tutorPhone = "0123456789";
    tutor_info[50].tutorAddress = "Bukit Jalil";
    tutor_info[50].tutionName = "KL";
    tutor_info[50].subjectCode = 1;
    tutor_info[50].rating = 0;

    tutor_info[51].tutorID = 22;
    tutor_info[51].tutorName = "Khor";
    tutor_info[51].dateJoin = "12/04/2021";
    tutor_info[51].dateTerminated = "";
    tutor_info[51].hourlyRate = 70;
    tutor_info[51].tutorPhone = "0174357930";
    tutor_info[51].tutorAddress = "Pagoh";
    tutor_info[51].tutionName = "JOHOR";
    tutor_info[51].subjectCode = 2;
    tutor_info[51].rating = 4.5;

    tutor_info[52].tutorID = 15;
    tutor_info[52].tutorName = "Michelle";
    tutor_info[52].dateJoin = "2/02/2020";
    tutor_info[52].dateTerminated = "";
    tutor_info[52].hourlyRate = 80;
    tutor_info[52].tutorPhone = "0122930940";
    tutor_info[52].tutorAddress = "Selangor";
    tutor_info[52].tutionName = "KL";
    tutor_info[52].subjectCode = 3;
    tutor_info[52].rating = 5;

    tutor_info[53].tutorID = 45;
    tutor_info[53].tutorName = "Joelle";
    tutor_info[53].dateJoin = "12/12/2020";
    tutor_info[53].dateTerminated = "";
    tutor_info[53].hourlyRate = 65;
    tutor_info[53].tutorPhone = "0142240940";
    tutor_info[53].tutorAddress = "Bukit Jalil";
    tutor_info[53].tutionName = "KL";
    tutor_info[53].subjectCode = 4;
    tutor_info[53].rating = 3;

    tutor_info[54].tutorID = 21;
    tutor_info[54].tutorName = "Jennifer";
    tutor_info[54].dateJoin = "19/01/2021";
    tutor_info[54].dateTerminated = "";
    tutor_info[54].hourlyRate = 65;
    tutor_info[54].tutorPhone = "0141461425";
    tutor_info[54].tutorAddress = "Kluang";
    tutor_info[54].tutionName = "JOHOR";
    tutor_info[54].subjectCode = 5;
    tutor_info[54].rating = 4.2;

    tutor_info[55].tutorID = 33;
    tutor_info[55].tutorName = "Larry";
    tutor_info[55].dateJoin = "29/01/2021";
    tutor_info[55].dateTerminated = "";
    tutor_info[55].hourlyRate = 53;
    tutor_info[55].tutorPhone = "0126371940";
    tutor_info[55].tutorAddress = "Serdang";
    tutor_info[55].tutionName = "KL";
    tutor_info[55].subjectCode = 6;
    tutor_info[55].rating = 3.5;

    tutor_info[56].tutorID = 18;
    tutor_info[56].tutorName = "Kimmy";
    tutor_info[56].dateJoin = "23/10/2020";
    tutor_info[56].dateTerminated = "";
    tutor_info[56].hourlyRate = 40;
    tutor_info[56].tutorPhone = "0126742952";
    tutor_info[56].tutorAddress = "Kulai";
    tutor_info[56].tutionName = "JOHOR";
    tutor_info[56].subjectCode = 7;
    tutor_info[56].rating = 2.5;

    tutor_info[57].tutorID = 10;
    tutor_info[57].tutorName = "Williams";
    tutor_info[57].dateJoin = "02/07/2021";
    tutor_info[57].dateTerminated = "";
    tutor_info[57].hourlyRate = 40;
    tutor_info[57].tutorPhone = "0129378019";
    tutor_info[57].tutorAddress = "Nilai";
    tutor_info[57].tutionName = "KL";
    tutor_info[57].subjectCode = 8;
    tutor_info[57].rating = 3.5;

    tutor_info[58].tutorID = 11;
    tutor_info[58].tutorName = "Aaron";
    tutor_info[58].dateJoin = "10/09/2020";
    tutor_info[58].dateTerminated = "";
    tutor_info[58].hourlyRate = 55;
    tutor_info[58].tutorPhone = "0149602852";
    tutor_info[58].tutorAddress = "Pontian";
    tutor_info[58].tutionName = "JOHOR";
    tutor_info[58].subjectCode = 9;
    tutor_info[58].rating = 3;

    tutor_info[59].tutorID = 18;
    tutor_info[59].tutorName = "Kimmy";
    tutor_info[59].dateJoin = "26/02/2021";
    tutor_info[59].dateTerminated = "";
    tutor_info[59].hourlyRate = 75;
    tutor_info[59].tutorPhone = "0128690385";
    tutor_info[59].tutorAddress = "Kulai";
    tutor_info[59].tutionName = "JOHOR";
    tutor_info[59].subjectCode = 10;
    tutor_info[59].rating = 4.5;
}

void GenerateSubject(Subject Subject_info[]) {
    Subject_info[0].subjectCode = 1;
    Subject_info[0].subjectName = "History";
    Subject_info[0].MonthlyHour = 10;
    
    Subject_info[1].subjectCode = 2;
    Subject_info[1].subjectName = "English";
    Subject_info[1].MonthlyHour = 12;

    Subject_info[2].subjectCode = 3;
    Subject_info[2].subjectName = "Science";
    Subject_info[2].MonthlyHour = 15;

    Subject_info[3].subjectCode = 4;
    Subject_info[3].subjectName = "Math";
    Subject_info[3].MonthlyHour = 15;

    Subject_info[4].subjectCode = 5;
    Subject_info[4].subjectName = "Computing";
    Subject_info[4].MonthlyHour = 15;

    Subject_info[5].subjectCode = 6;
    Subject_info[5].subjectName = "Bahasa Melayu";
    Subject_info[5].MonthlyHour = 10;

    Subject_info[6].subjectCode = 7;
    Subject_info[6].subjectName = "Economics";
    Subject_info[6].MonthlyHour = 12;

    Subject_info[7].subjectCode = 8;
    Subject_info[7].subjectName = "Accounting";
    Subject_info[7].MonthlyHour = 12;

    Subject_info[8].subjectCode = 9;
    Subject_info[8].subjectName = "Mandarin";
    Subject_info[8].MonthlyHour = 14;

    Subject_info[9].subjectCode = 10;
    Subject_info[9].subjectName = "Additional Mathematic";
    Subject_info[9].MonthlyHour = 12;
}