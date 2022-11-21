<h3 align="center">
 <img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Cover.jpg" width="50%" height="50%"> 
</h3>

# “X”-MSc-Advanced-Project      
FAN SHU 20011098          
          
🔗：* [Github for Advanced Project](https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project)
                                                 
## Concept
Inevitably, in any scenario, robots, or artificial intelligence, have gradually become integrated into human society. Robotics experts consider some attributes, such as robot gender. Robots have no gender - they are metal, plastic and silicon, and are full of "1s" and "0s". But humans have always been able to make their judgements by cues such as appearance, colour, personality and voice. The problem for robot designers today is to create fairer gender norms that challenge current gender stereotypes. Better gender norms in robot society will also feed back into human society.
The scales of robotic gender do not exist, But it has done its best to maintain its balance. Good human gender norms will help this 'balance' to be better maintained, and a blanket disregard and misuse of stereotypes will reflect badly on it.        
<h3 align="center">
<img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Physical%20model/2142D225-9D78-4460-9D80-444D80E4E4B0-5026-000003B9BF09FA86.JPG" width="50%" height="50%">
</h3>

## How It Works        
The project "X" aims to visualise the gender dilemma faced by robots, with a beam, a ball and a machine-generated digital jellyfish as the centre of vision.
1. When the user approaches the installation, LEDs will light up.           
2. A video on screen plays a photo of the generated electronic jellyfish and subtitles guide the user in guessing their gender. The leftmost side is male, the rightmost is female and the position of the ball will be taken as the user's answer. The user can move the pieces to influence the servo’s angle at so that the ball stay at their ideal position. Of course the result may be unsatisfactory.               
3. When the angle of the beam reaches a certain value, the video will be distorted and glitched.   
                              
*Watch the Video*                              
[![Watch the Video](https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Cover.jpg)](https://youtu.be/ViRgSTNtf5M)     
                     
## Iterative Development Blog
#### Week01&02&03
After the tutorial with Hadeel, I decided on the direction of my research on gender in robotics. I spent the first three weeks reading papers on this topic, trying to find my own research direction by pulling from existing research directions. I found 10 respondents and invited them to fill in my questionnaire.
<h3 align="center">
<img width="665" alt="截屏2022-11-21 10 58 19" src="https://user-images.githubusercontent.com/91974159/203123618-2fd27c46-a817-4984-b1c5-b54bf42bfee9.png" width="50%" height="50%">   
</h3>
                    
After a lot of brainstorming and trial and error, I finally decided to focus on the "balance" of the device, and Hadeel recommended the PID algorithm and the accelerometer. That is how most robots self-balance.

#### Week04&05.     
During these two weeks I started writing the code and built the first simple Model One. With constant debugging it worked successfully.        
<h3 align="center">
![IMG_7215](https://user-images.githubusercontent.com/91974159/203124831-f42bdf25-08fb-4203-bd34-71feb068f60a.jpg)
</h3>
                 
The interaction method bothered me. At first I envisaged a solution with a servo motor picking the ball on the beam to break the balance itself. The user could control this by sliding a resistor. But the completed circuit didn't work as perfectly as I thought it would. I started thinking about whether I could develop from the existing code to find out what was possible.                  
I planned to add another ultrasonic sensor, which would use the distance it sensed when an object was placed in front of it to prompt the servo motor to move until the distance between the ball on the beam and the ultrasonic sensor was also maintained at the same level before the motor would stop moving. If the user flicks the ball directly by hand, the ball will struggle to regain its balance, just as it did with the previous Model One.   

https://user-images.githubusercontent.com/91974159/203129030-f596dd86-e5fa-42dc-bd8c-cc4acb263dbf.mp4

 
                             
#### Week06&07 
为了增强用户的五官感受，我决心为装置制作一些画面。我并不想将机器人已特别直接的方式呈现。因此决定采用机器生成的电子水母作为代替。采用style gan3生成的不存在的水母视频。
           

https://user-images.githubusercontent.com/91974159/203128860-5413f581-e77f-4e9d-bd31-c03c6ce8511b.mp4

                                             
整个装置的完整交互概念开始形成了。视频字幕将会引导参与者对电子水母的性别进行猜测。最左侧为公，最右侧为母，球停留的位置将会被视为用户的答案，用户可以通过移动装置前方的棋子来影梁倾斜的角度，以使得球停在他们理想的位置。当然结果可能是不尽如人意的。     
部分用户在尝试之后，希望可以在视频与实体装置之间能有一个互动的反应，故而我运用touch designer作为桥梁，通过黏贴在水平梁结构上的水平仪提供串口数据，用此数据驱动视频发生扭曲和像素化。


#### Week08&09
为了使模型变得更美观，我绘制了镭射切割图。因此诞生了模型2号，但途中还是出现了很多尺寸上的错误，舵机的位置放置不够高。不断调整下，最终成品模型3号完成了。在调试好的模型3号的完整电路电路中加入灯带。    
<h3 align="center">
 <img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Arduino/Circuit%20diagram.jpg" width="50%" height="50%"> 
</h3>
 我用3D打印制作了参与者需要移动的棋子。        
      
#### Week10
最后一周被用来拍摄视频、剪辑视频和撰写论文。

谢谢你的观看
