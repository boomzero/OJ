/**********************************************************************
OJ: An online judge server written with only C++ and MySQL.
Copyright (C) 2023  langningchen

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
**********************************************************************/

#pragma once

#include "User.hpp"
#include "Exception.hpp"
#include "Regexes.hpp"
#include "Database.hpp"
#include "Role.hpp"

class USERS
{
public:
    static void HashPassword(std::string Password, std::string &HashedPassword);
    static void AddUser(std::string Username, std::string Nickname, std::string HashedPassword, std::string EmailAddress, int Role);
    static void CheckUsernameAvailable(std::string Username);
    static void CheckEmailAvailable(std::string EmailAddress);
    static void CheckPasswordCorrect(std::string Username, std::string HashedPassword, int &UID);
    static void IsAdmin(int UID, bool &Result);
    static void UpdateUser(int UID, std::string Username, std::string Nickname, std::string HashedPassword, std::string EmailAddress, USER_ROLE Role);
    static void DeleteUser(int UID);
    static void GetUser(int UID, USER &User);
};
