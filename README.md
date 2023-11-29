# urdf_labs

## lab2

```shell
# Консоль 1 - контроллер 
source ./devel/setup.sh
roslaunch myrobot_control control.launch  

# Консоль 2 - симулятор 
source ./devel/setup.sh
roslaunch myrobot_simulator gazebo_testwalls.launch  

# Консоль 3 - rviz 
source ./devel/setup.sh
roslaunch myrobot_description rviz.launch  

# Консоль 4 - rqt
rqt  
```

## lab3

```shell
# Консоль 1 - контроллер 
source ./devel/setup.sh
roslaunch myrobot_control control.launch  

# Консоль 2 - симулятор 
source ./devel/setup.sh
roslaunch myrobot_simulator gazebo_testwalls.launch  

# Консоль 3 - rviz 
source ./devel/setup.sh
roslaunch myrobot_description rviz.launch  

# Консоль 4 - узел управления роботом с клавиатуры
source ./devel/setup.sh
roslaunch myrobot_teleop teleop_keyboard.launch

# Консоль 5 - узел управления роботом в автоматическом режиме (ик-сенсоры)
source ./devel/setup.sh
roslaunch myrobot_teleop ir_auto_teleop.launch
```