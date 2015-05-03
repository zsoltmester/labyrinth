#pragma once

#include <glm/glm.hpp>

#include <iostream>

namespace config
{
	const bool	IS_DEBUG = true;

	// screen resolution
	const short SCREEN_RESOLUTION_WIDTH = 1366;
	const short SCREEN_RESOLUTION_HEIGHT = 768;

	// textures
	const std::string TEXTURE_FILE_NAME_GRASS = "texture_grass.bmp";
	const std::string TEXTURE_FILE_NAME_WALL = "texture_wall.bmp";
	const std::string TEXTURE_FILE_NAME_COIN = "texture_coin.bmp";
	const std::string TEXTURE_FILE_NAME_DIAMOND = "texture_diamond.bmp";

	// map
	const short	MAP_SIZE = 10; // in task: 50
	const float	FIELD_SIZE = 1.0f;

	// wall
	const float	WALL_HEIGHT = FIELD_SIZE * 1;
	const float	WALL_THICKNESS = FIELD_SIZE *  0.1f;
	const float WALL_POSSIBILITY = 0.5f;
	const bool WITH_DOUBLE_WALL = true;

	// coin
	const float COIN_RADIUS = 0.25f;
	const float COIN_THICKNESS = 0.1f;
	const float COIN_ANIMATION_LENGTH = 5;
	// the coin's shield will build up with N cuboid
	// and the top and bottom circles with N triangle
	const short COIN_RESOLUTION = 20;
	const short NUMBER_OF_COINS = 10; // in task: 100

	// diamond
	const float DIAMOND_BOTTOM_HEIGHT = 0.75f;
	const float DIAMOND_TOP_HEIGHT = DIAMOND_BOTTOM_HEIGHT / 2.0f;
	const float DIAMOND_RADIUS = 0.25f;
	const short DIAMOND_NUMBER_OF_SIDES = 6;
	const float DIAMOND_ANIMATION_LENGTH = 5;
	const short NUMBER_OF_DIAMONDS = 4; // in task: 10

	// sun and moon
	const short SUN_AND_MOON_RESOLUTION = 20;
	const float SUN_AND_MOON_SIZE = 0.25f; // default: 1
	const float SUN_AND_MOON_ORBIT_RADIUS_MULTIPLIER = 1.1f;
	const float SUN_AND_MOON_ANIMATION_LENGTH = 30;

	// ambient light
	const glm::vec4 AMBIENT_LIGHT_COLOR = glm::vec4(1, 1, 1, 1);
	const glm::vec4 AMBIENT_LIGHT_STRENGTH = glm::vec4(0.1f, 0.1f, 0.1f, 1);

	// diffuse light
	const glm::vec4 SUN_DIFFUSE_LIGHT_COLOR = glm::vec4(1, 1, 0, 1);
	const glm::vec4 SUN_DIFFUSE_LIGHT_MAX_STRENGTH = glm::vec4(0.75f, 0.75f, 0.75f, 1);
	const glm::vec4 MOON_DIFFUSE_LIGHT_COLOR = glm::vec4(0, 0, 1, 1);
	const glm::vec4 MOON_DIFFUSE_LIGHT_MAX_STRENGTH = glm::vec4(0.5f, 0.5f, 0.5f, 1);

	// specular light
	const float SPECULAR_LIGHT_SIZE = 36;
	const glm::vec4 SPECULAR_LIGHT_STRENGTH = glm::vec4(1, 1, 1, 1);
	const glm::vec4 SUN_SPECULAR_LIGHT_COLOR = glm::vec4(1, 1, 0, 1);
	const glm::vec4 MOON_SPECULAR_LIGHT_COLOR = glm::vec4(1, 1, 1, 1);
}