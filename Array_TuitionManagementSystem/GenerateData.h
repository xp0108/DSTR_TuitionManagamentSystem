#pragma once
#include <iostream>
#include "DataStruc.h"

void GenerateData(Tutor tutor_info[]) {
    tutor_info[50].tutorID = 50;
    tutor_info[50].tutorName = "Onn";
    tutor_info[50].dateJoin = "12/05/2021";
    tutor_info[50].dateTerminated = "12/06/2021";
    tutor_info[50].hourlyRate = 10;
    tutor_info[50].tutorPhone = "0123456789";
    tutor_info[50].tutorAddress = "Bukit Jalil";
    tutor_info[50].tutionCode = 1;
    tutor_info[50].subjectCode = 1;
    tutor_info[50].rating = 0;

    tutor_info[51].tutorID = 51;
    tutor_info[51].tutorName = "Khor";
    tutor_info[51].dateJoin = "12/05/2021";
    tutor_info[51].dateTerminated = "12/06/2021";
    tutor_info[51].hourlyRate = 10;
    tutor_info[51].tutorPhone = "111111111";
    tutor_info[51].tutorAddress = "KL";
    tutor_info[51].tutionCode = 2;
    tutor_info[51].subjectCode = 3;
    tutor_info[51].rating = 3;

    tutor_info[52].tutorID = 52;
    tutor_info[52].tutorName = "Michelle";
    tutor_info[52].dateJoin = "12/05/2021";
    tutor_info[52].dateTerminated = "12/06/2021";
    tutor_info[52].hourlyRate = 10;
    tutor_info[52].tutorPhone = "0122930940";
    tutor_info[52].tutorAddress = "Selangor";
    tutor_info[52].tutionCode = 3;
    tutor_info[52].subjectCode = 4;
    tutor_info[52].rating = 5;
}