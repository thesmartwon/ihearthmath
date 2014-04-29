#pragma once
class KeyInput
{
public:
	KeyInput(void);
	~KeyInput(void);

	void handleKeysDown(int keycode);
	void handleKeysUp(int keycode);
	void resetTapped();
	void resetDowned();

	bool *returnKeysDown();
	bool *returnKeysTap();
private:
	bool keysDown[140];
	bool keysTap[140];
};