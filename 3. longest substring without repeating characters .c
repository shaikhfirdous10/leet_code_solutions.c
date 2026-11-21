
Given a string s, find the length of the longest substring without duplicate characters.

int lengthOfLongestSubstring(char* s) {
    int lastSeen[256];

    // Initialize every character as unseen
    for (int x = 0; x < 256; x++) {
        lastSeen[x] = -1;
    }

    int maxlength = 0;
    int i = 0;

    for (int j = 0; s[j] != '\0'; j++) {

        unsigned char ch = (unsigned char)s[j];

        // If character was seen inside current window
        if (lastSeen[ch] >= i) {
            i = lastSeen[ch] + 1;
        }

        // Remember the current character's position
        lastSeen[ch] = j;

        // Calculate current window length
        int length = j - i + 1;

        if (length > maxlength) {
            maxlength = length;
        }
    }

    return maxlength;
}
