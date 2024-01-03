/*2125. Number of Laser Beams in a Bank*/

 int prev = 0, res = 0;
    for (auto &r : bank) {
        int cur = count(begin(r), end(r), '1');
        if (cur) {
            res += prev * cur;
            prev = cur;
        }
    }
    return res;