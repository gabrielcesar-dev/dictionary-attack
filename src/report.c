#include "report.h"

void output_report(FILE *report_file, user users, char *password){
    // Output the report to the file
    fprintf(report_file, "%s\n", users.login);
    fprintf(report_file, "%s\n", password);
    fprintf(report_file, "%s\n", users.username);
    fprintf(report_file, "%s\n", users.birthday);
    fprintf(report_file, "---\n");
}
