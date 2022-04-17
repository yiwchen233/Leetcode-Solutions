class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        words = re.findall('\w+',paragraph.lower())
        m = sorted(Counter(words).items(), key=lambda x: x[1], reverse = True)
        for word, _ in m:
            if word not in set(banned):
                return word
