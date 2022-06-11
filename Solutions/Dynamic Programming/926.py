class Solution(object):
    def minFlipsMonoIncr(self, S):
        P = [0]
        for x in S:
            P.append(P[-1] + int(x))

        return min(P[j] + len(S)-j-(P[-1]-P[j])
                   for j in xrange(len(P)))
