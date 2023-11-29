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