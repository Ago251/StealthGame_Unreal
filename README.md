# StealthGame_Unreal

# Introduction
An UE4 (version 4.24) project made for studying Stealth mechanics. Here the list of what I faced during the development.

- C++ with UE4: a focus on UE4 classes like Pawn, Actor, ActorComponent, Character, AIController, Procedural mesh.
- Delegates and how to bind them in Blueprint
- Animator: work with blendspace, FSM animation, also work with timeline from C++ code
- Implementing Stealth mechanics: walk, move camera, aim on the shoulder, cover system, viewcone(procedural mesh), shaders for feedbacks(exclamation point and view cone)
- Implementing AI with Behaviour tree.

# Input  
Walk: WASD  
Camera: mouse movement  
Aim: mouse right click  
Shoot: mouse left click || right trigger RT  
Cover: E key  
Pause menu: escape  

#Classes
ATP_ThirdPersonCharacter: this class implements the playable character. Based on the ATP_ThirdPersonCharacter class of the UE4 content pack

AEnemy: this class handles the mechanics implementation of the enemies

AAIController: this class implements the sight and hearing senses of the enemies. It runs automatically the given behaviour tree. Behaviour trees are made with the Blueprint tools of UE4.

ACoverActor: this class implements the covers

UHealthComponent: this component implements the health system both ATP_ThirdPersonCharacter and AEnemy are using this to manage health
