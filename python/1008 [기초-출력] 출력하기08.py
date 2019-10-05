import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')
# 유니코드를 이용하기 때문에 한글을 출력할 때와 마찬가지로
# 상단에 있는 코드를 넣어야 합니다.

print("\u250C\u252C\u2510")
print("\u251C\u253C\u2524")
print("\u2514\u2534\u2518")
