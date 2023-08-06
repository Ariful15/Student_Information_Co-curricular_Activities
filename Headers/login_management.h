#ifndef LOGIN_MANAGEMENT_H
#define LOGIN_MANAGEMENT_H

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "../headers/custom_print_function.h"

bool log_in_as_admin(void);
bool log_in_as_user(void);

#endif /* LOGIN_MANAGEMENT_H */
