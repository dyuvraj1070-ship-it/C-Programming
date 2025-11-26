#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FNAME "tokens.txt"
#define NAME_LEN 50
#define ROLL_LEN 20
#define LINE_MAX 256
#define MAX_DAILY_PER_STUDENT 2

typedef enum { SLOT_MORNING = 1, SLOT_MIDDAY = 2, SLOT_EVENING = 3 } Slot;

/* union for extra student info: store either phone OR allergy note (small) */
typedef union {
    char phone[16];
    char allergy[30];
} ExtraInfo;

/* Token record kept in file and memory */
typedef struct {
    int tokenNo;
    char date[11];          // YYYY-MM-DD
    char roll[ROLL_LEN];
    char name[NAME_LEN];
    char meal[12];          // Breakfast/Lunch/Dinner
    int slot;               // 1/2/3 for morning/midday/evening
    int prefType;           // 0 = none, 1 = phone, 2 = allergy
    ExtraInfo extra;        // union usage
} Token;

/* get today's date string */
char *today_date() {
    static char buf[11];
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    sprintf(buf, "%04d-%02d-%02d", tm->tm_year+1900, tm->tm_mon+1, tm->tm_mday);
    return buf;
}

/* append token to file */
void save_token(Token *tk) {
    FILE *fp = fopen(FNAME, "a");
    if (!fp) { perror("open"); return; }
    // Format:
    // tokenNo,date,roll,name,meal,slot,prefType,prefValue\n
    if (tk->prefType == 1)
        fprintf(fp, "%d,%s,%s,%s,%s,%d,%d,%s\n",
                tk->tokenNo, tk->date, tk->roll, tk->name, tk->meal, tk->slot, tk->prefType, tk->extra.phone);
    else if (tk->prefType == 2)
        fprintf(fp, "%d,%s,%s,%s,%s,%d,%d,%s\n",
                tk->tokenNo, tk->date, tk->roll, tk->name, tk->meal, tk->slot, tk->prefType, tk->extra.allergy);
    else
        fprintf(fp, "%d,%s,%s,%s,%s,%d,%d,\n",
                tk->tokenNo, tk->date, tk->roll, tk->name, tk->meal, tk->slot, tk->prefType);
    fclose(fp);
}
