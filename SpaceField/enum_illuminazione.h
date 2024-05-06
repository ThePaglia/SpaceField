typedef enum
{
	NO_ILLUMINATION,
	PHONG,
	BLINN,
} IlluminationType;

typedef enum
{
	RED_PLASTIC,
	EMERALD,
	BRASS,
	SLATE,
	YELLOW,
	NO_MATERIAL
} MaterialType;

typedef enum
{
	NO_SHADER,
	TEXTURE,
	PHONG_SHADING,
	INTERPOLATE_SHADING,
} ShaderType;
