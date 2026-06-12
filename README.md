This repository is for practicing C programming.

## 1) 처음 한 번 (다른 컴퓨터에서 가져오기)
`git clone https://github.com/USER/REPO.git`

### 👉 이걸로 해당 컴퓨터에 리포지터리 복사

## 2) 작업 후 업로드 (push)
```
git add .
git commit -m "메시지"
git push origin main
```

## 3) 다른 컴퓨터에서 최신 내용 받기 (중요)
`git pull origin main`

### 👉 항상 작업 전에 먼저 실행하는 게 안전함

## 4) 전체 워크플로우 (여러 컴퓨터 사용 핵심)

다른 컴퓨터 A, B, C에서 이렇게 반복:

(작업 시작 전) 
`git pull origin main`
(작업 후) 
```
git add .
git commit -m "update"
git push origin main
```

## 5) 중요한 개념
```
clone → 처음 1번만
pull → 최신 코드 가져오기
push → GitHub로 업로드
origin → GitHub 원격 저장소 이름
main → 기본 브랜치 (예전엔 master)
```

## 6) 실전 팁 (진짜 중요)
여러 컴퓨터 쓰면 필수 습관:
👉 작업 시작 = pull
👉 작업 끝 = push