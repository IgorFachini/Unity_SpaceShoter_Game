struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 64 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//10. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//11. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//12. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//15. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//16. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//17. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//18. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//19. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//20. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//21. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//22. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//23. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//24. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//25. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//26. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//27. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//28. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//29. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//30. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//31. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//32. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//33. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//34. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//35. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//36. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//37. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//38. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//39. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//40. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//41. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//42. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//43. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//44. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//45. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//46. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//47. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//48. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//49. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//50. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//51. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//52. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//53. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//54. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//55. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//56. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//57. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//58. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//59. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//60. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//61. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//62. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//63. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
