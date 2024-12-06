int search(string p, string s) {
    vector <int> pf(256, 0);
    vector <int> sf(256, 0);

    int np = p.size(), ns = s.size();
    int ps = 0, ss = 0, val;

    for(int i = 0; i < np; i++) {
        pf[p[i]]++;
        sf[s[i]]++;
    }

    int cnt = 0;
    if(pf == sf) cnt++;

    int i = 0, j = np;
    while(j < ns) {
        sf[s[j]]++;
        sf[s[i]]--;
        if(pf == sf) cnt++;
        i++, j++;
    }

    return cnt;
}