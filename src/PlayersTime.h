#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
  uint8_t identityNumber;

public:
  Player(uint8_t id);
  //~Player();
  void TimerPlayer(void);
};

#endif /*PLAYER_H*/