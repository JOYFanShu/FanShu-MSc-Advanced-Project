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
 <img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Physical%20model/IMG_7215.jpg" width="50%" height="50%"> 
</h3>
<h3 align="center">
 <img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Physical%20model/IMG_7537.jpg" width="50%" height="50%"> 
</h3>
                                  
The interaction method bothered me. At first I envisaged a solution with a servo motor picking the ball on the beam to break the balance itself. The user could control this by sliding a resistor. But the completed circuit didn't work as perfectly as I thought it would. I started thinking about whether I could develop from the existing code to find out what was possible.                  
I planned to add another ultrasonic sensor, which would use the distance it sensed when an object was placed in front of it to prompt the servo motor to move until the distance between the ball on the beam and the ultrasonic sensor was also maintained at the same level before the motor would stop moving. If the user flicks the ball directly by hand, the ball will struggle to regain its balance, just as it did with the previous Model One.   

https://user-images.githubusercontent.com/91974159/203129030-f596dd86-e5fa-42dc-bd8c-cc4acb263dbf.mp4

 
                             
#### Week06&07 
In order to enhance the sensation of the user's five senses, I was determined to create some graphics for the installation. I did not want to present the robot in a particularly straightforward way already. Therefore it was decided to use a machine-generated digital jellyfish instead. Video of a non-existent jellyfish generated using style gan3.


https://user-images.githubusercontent.com/91974159/203140845-792b3bac-99db-4006-9614-24828aaffb74.mp4



The complete interactive concept of the entire installation is beginning to take shape. Subtitles guide the user in guessing their gender. The leftmost side is male, the rightmost is female and the position of the ball will be taken as the user's answer. The user can move the pieces to influence the servo’s angle at so that the ball stay at their ideal position. Of course the result may be unsatisfactory.
Some users wanted an interactive response between the video and the physical device after trying it out, so I used touch designer as a bridge to provide serial data via an absolute orientation sensor glued to the horizontal beam structure, which was used to drive the distortion and pixelation of the video.


https://user-images.githubusercontent.com/91974159/203141936-3ee1fca4-9795-4988-a728-721c3108ac62.mp4



#### Week08&09
To make the model more aesthetically pleasing, I drew up laser cutouts. Thus was born Model Two, but along the way there were many dimensional errors and the servos were not placed high enough. With a lot of adjustments, the finished Model 3 was finally completed. Adding the light strip to the complete circuitry of the debugged Model Three.
<h3 align="center">
 <img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Physical%20model/IMG_7661.jpg" width="50%" height="50%"> 
</h3>
<h3 align="center">
 <img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Physical%20model/F0AECDAA-344A-4AA7-A4D6-3FD656DC7B09-5026-000003B98F624C3A.JPG" width="50%" height="50%"> 
</h3>
<h3 align="center">
 <img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Arduino/Circuit%20diagram.jpg" width="50%" height="50%"> 
</h3>
 I used 3D printing to create the pieces that the participants needed to move.        
<h3 align="center">
 <img src="https://github.com/JOYFanShu/FanShu-MSc-Advanced-Project/blob/main/Physical%20model/IMG_7871.jpg" width="50%" height="50%"> 
</h3>  
              
#### Week10
The final week was used to shoot the video, edit it and write the essay.

Thank you for watching.😊
