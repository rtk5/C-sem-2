/*Create a Structure named “YouTubeManagement” with following members -

channel_name: A character array to store the name of the channel (whitespaces allowed).
total_videos: An integer to store the total number of videos uploaded by the channel.
subscriber_count: A long long integer to store the number of subscribers of the channel.
earnings: A double variable to store the earnings of the channel.
contact_info: An instance of the “ContactInfo” structure.
“ContactInfo” structure members -

email: A character array to store the email address of the channel.
phone: A long long int variable to store the phone number of the channel.
Create the below functions and execute in given order -

Function “readDetails” to read all the members of the structure except “earnings”.
Function “calculateEarnings” to calculate the earnings of the channel based on the assumption that all subscribers view every video uploaded by the channel and the earnings is calculated at Rs. 0.45 per view. Insert the calculated value in the “earnings” variable of the structure.
Function “displayDetails” to display all the fields of the structure in proper format.
Input Format

5 lines of Input containing a member of structure “YouTubeManagement” in following order -

channel_name total_videos subscriber_count email phone

Constraints

1 <= length of channel_name and email <=50

Print “earnings” up to 2 precision only.

Number of total views will be within the range of long long int.

Output Format

6 lines in output as follows -

Channel Name: {channel_name}

Total Videos: {total_videos}

Subscriber Count: {subscriber_count}

Contact Email: {email}

Contact Phone: {phone}

Total Earnings of the Channel: Rs. {earnings}

Sample Input 0

Anime Club
100
10000
animeclub@youtube.com
1111111111
Sample Output 0

Channel Name: Anime Club
Total Videos: 100
Subscriber Count: 10000
Contact Email: animeclub@youtube.com
Contact Phone: 1111111111
Total Earnings of the Channel: Rs. 450000.00
Sample Input 1

PES University
231
9867263
pesuyt@pes.edu
9898989898
Sample Output 1

Channel Name: PES University
Total Videos: 231
Subscriber Count: 9867263
Contact Email: pesuyt@pes.edu
Contact Phone: 9898989898
Total Earnings of the Channel: Rs. 1025701988.85
Sample Input 2

TenZ
414
2100000
tenz@tenz.com
1010101010
Sample Output 2

Channel Name: TenZ
Total Videos: 414
Subscriber Count: 2100000
Contact Email: tenz@tenz.com
Contact Phone: 1010101010
Total Earnings of the Channel: Rs. 391230000.00
Sample Input 3

Kyedae
193
1270000
kyedae@tenz.com
1010111111
Sample Output 3

Channel Name: Kyedae
Total Videos: 193
Subscriber Count: 1270000
Contact Email: kyedae@tenz.com
Contact Phone: 1010111111
Total Earnings of the Channel: Rs. 110299500.00*/



#include <stdio.h>
#include <string.h>

struct YouTubeManagement {
    char channel_name[51]; 
    int total_videos; 
    long long int subscriber_count;
    double earnings; 
    struct contact_info {
        char email[51]; 
        long long int phone;
    } cn;
};

void readDetails(struct YouTubeManagement *c) {
    scanf("%50[^\n]%*c %d %lld %50[^\n]%*c %lld", c->channel_name, &c->total_videos, &c->subscriber_count, c->cn.email, &c->cn.phone);
}

void calculateEarnings(struct YouTubeManagement *c) {
    c->earnings = c->subscriber_count * c->total_videos * 0.45;
}

void displayDetails(struct YouTubeManagement c) {
    printf("Channel Name: %s\nTotal Videos: %d\nSubscriber Count: %lld\nContact Email: %s\nContact Phone: %lld\nTotal Earnings of the Channel: Rs. %.2f\n",
           c.channel_name, c.total_videos, c.subscriber_count, c.cn.email, c.cn.phone, c.earnings);
}

int main() {
    struct YouTubeManagement c;
    readDetails(&c);
    calculateEarnings(&c);
    displayDetails(c);
    return 0;
}
