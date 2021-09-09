# Among us 오토마타
이 프로젝트는 **Among Earth**팀이 한양대 공학입문설계에서 제작한 **Among us 구현 오토마타** 중 카드 인식 미션과 임포스터 벤트를 구현한 부분입니다. <br>
"제 7차 입문설계 경진대회" Automata 분야에서 장려상을 수상하였습니다.

## 카드 인식 미션
### 개요
자체 제작 앱으로 아두이노와 블루투스 통신해서 stepper 모터를 돌리면 렉 & 피니언에 의해 카드가 swipe 되고, 이를 인식하여 문구를 출력하는 장치입니다.

### 알고리즘 설계
- 블루투스를 이용해서 스마트폰 앱으로 아두이노에 신호 전달
- 피니언과 연결된 stepper 모터를 카드와 연결된 렉의 크기에 맞게 회전
- 포토 인터럽터가 카드 인식
- LCD에 문구 표시 및 LED로 알림
- 작동 후 되돌리는 알고리즘도 구현

### 회로 설계
![image](https://user-images.githubusercontent.com/65582244/132733669-542904a3-bc33-40b8-bd24-a929e7a65af1.png)
![image](https://user-images.githubusercontent.com/65582244/132733688-b6de0528-1332-4dc9-9e62-cbd2b1dabb37.png)
5V 1A 전원 연결

### 렉 & 피니언 제작
![image](https://user-images.githubusercontent.com/65582244/132734938-55569d6f-85e1-45a6-9312-b23024b98f31.png)
- inkscape로 설계 후 레이저 컷팅

![image](https://user-images.githubusercontent.com/65582244/132735439-cedb3557-f744-4858-89b4-14ef06f04e09.png)
- 여러 겹을 붙여서 잘 작동되도록 함
- 피니언은 stepper 모터, 렉은 카드에 연결

### 소스 코드
https://github.com/choi92/Among_Us/blob/main/AmongUs_CardMission.ino

### 구동 어플리케이션 제작
![image](https://user-images.githubusercontent.com/65582244/132739786-f68490c6-f503-42bc-97b5-9d6b3548422d.png)
![image](https://user-images.githubusercontent.com/65582244/132737444-89e77414-98fa-4dbe-8120-6b85c3a90e41.png)
- 아두이노와 블루투스 통신할 수 있는 버튼을 만듦
- swipe 버튼으로 미션 구동
- detect 버튼으로 되돌리기

### 구동
https://youtu.be/pOMnJkrgcI8

