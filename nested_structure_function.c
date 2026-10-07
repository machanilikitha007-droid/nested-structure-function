#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
};

struct Meeting
{
    char title[40];
    struct Time start;
};

void displayMeeting(struct Meeting meeting)
{
    printf("Meeting: %s\n", meeting.title);
    printf("Start Time: %02d:%02d\n",
           meeting.start.hours,
           meeting.start.minutes);
}

int main()
{
    struct Meeting meeting = {
        "Project Discussion",
        {10, 30}
    };

    displayMeeting(meeting);

    return 0;
}
