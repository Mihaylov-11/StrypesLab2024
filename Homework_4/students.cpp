#include <iostream>
#include <bitset>
#include <cstdint>

bool checkStudentID (int student){
    if (student >=1 && student <= 64){
        return true;
    }
    
    else{
        std::cout << "Invalid student ID. Pick number between 1 and 64" << std::endl;
        return false;
        
    }
}

void setAttendance (uint64_t& attendance){
    std::cout << "Enter student ID to mark as present: ";
    int student;
    std::cin >> student;
    if (checkStudentID(student))
        attendance |= (1ULL<<(student-1));
}

void clearAttendance (uint64_t& attendance){
    std::cout << "Enter student ID to mark as missing: ";
    int student;
    std::cin >> student;
    if (checkStudentID(student))
        attendance &= ~(1ULL<<(student-1));
}

void flipChangeAttendance (uint64_t& attendance){
    std::cout << "Enter student ID to inverse attendance: ";
    int student;
    std::cin >> student;
    if (checkStudentID(student))
        attendance ^= (1ULL<<(student-1));
}

void attendancePresent (uint64_t& attendance){
    std::cout << "Present students IDs: " << std::endl;
    for (unsigned int i = 0; i <= 63; i++){
        if(attendance & (1ULL << i)){
            std::cout << i+1 << std::endl;
        }
    }
}

void attendanceMissing (uint64_t& attendance){
    std::cout << "Missing students IDs: " << std::endl;
    for (int i = 0; i <= 63; i++){
        if(!(attendance & (1ULL << i))){
            std::cout << i+1 << std::endl;
        }
    }
}

int main (){
   
    uint64_t attendance = 0;
    int option;

    while(1){

        std::cout << "1. Set attendance" << std::endl;
        std::cout << "2. Clear attendance" << std::endl;
        std::cout << "3. Attendance info" << std::endl;
        std::cout << "4. Change attendance" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cin >> option;

        if (option == 1){
            setAttendance(attendance);

        }
        else if(option == 2){
            clearAttendance(attendance);

        }
        else if (option == 3){
            std::cout << "1. Show present students" << std::endl;
            std::cout << "2. Show missing students" << std::endl;
            std::cin >> option;

            if (option == 1){
                attendancePresent(attendance);
            }
            else if(option == 2){
                attendanceMissing(attendance);
            }

        } else if (option == 4){   
            flipChangeAttendance(attendance);

        }else if (option == 5){
            break;
        }

    }

    return 0;
}