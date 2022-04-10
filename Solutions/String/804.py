class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        MorList = [".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."]
        return len({''.join(MorList[ord(i) - ord('a')] for i in w) for w in words})
