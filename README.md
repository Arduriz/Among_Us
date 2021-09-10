# Among us 오토마타
이 프로젝트는 **Among Earth**팀이 한양대 공학입문설계에서 제작한 **Among us 구현 오토마타** 중 카드 인식 미션과 임포스터 감지 및 조명을 구현한 부분입니다. <br>
"제7회 공과대학장배공학입문설계경진대회" Automata 분야에서 장려상을 수상하였습니다.

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
![image](https://user-images.githubusercontent.com/65582244/132733688-b6de0528-1332-4dc9-9e62-cbd2b1dabb37.png) <br>
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

### 구동 모습
![image](https://user-images.githubusercontent.com/65582244/132740217-c2a0185b-b68b-4c0f-b1d5-3758202995c0.png) <br>
https://youtu.be/pOMnJkrgcI8

## 임포스터 감지 및 조명
### 개요
임포스터가 벤트를 타고 이동해서 크루원을 죽일 때 조명이 꺼지게 하는 장치입니다.

### 알고리즘 설계
- 크랭크을 이용해 임포스터가 벤트를 타고 이동함을 구현
- 초음파 센서로 이를 감지
- LED를 꺼지게 함

### 회로 설계
![image](https://user-images.githubusercontent.com/65582244/132746140-1e925827-1cf0-403b-8711-f2c58d88dc21.png) <br>
![image](https://user-images.githubusercontent.com/65582244/132746163-151b21cc-54b1-40a0-a568-c3685629a310.png)

### 소스 코드
https://github.com/choi92/Among_Us/blob/main/AmongUs_ImposterDetect.ino

### 구동 모습
![image](https://user-images.githubusercontent.com/65582244/132747427-9dc38632-3cbb-46be-b619-a62dfc60267c.png) <br>
https://youtu.be/tGL12VSzD4s

___
## 전체 모습
![image](https://user-images.githubusercontent.com/65582244/132747139-419ea0a0-15f7-45a8-ae4a-39d2cad5a874.png)
![image](https://user-images.githubusercontent.com/65582244/132747234-7cf5bbf9-7e99-4130-8e6a-92fb2f1b0e6e.png)
![image](https://user-images.githubusercontent.com/65582244/132747294-0564d5a2-e3e6-4e16-abfc-e19d87784d5c.png)
