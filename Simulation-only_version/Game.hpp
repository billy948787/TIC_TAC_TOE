#ifndef GAME_HPP
#define GAME_HPP
#include <stdint.h>
const int BOARD_SIZE = 3;

/**
 * @brief 遊戲的主邏輯控制函式
 */
void startGame();

/**
 * @brief 檢查當前棋盤是否有玩家獲勝
 *
 * @param board 棋盤的二維陣列表示
 * @param playTurn 當前玩家的回合 (true 表示 X 玩家, false 表示 O 玩家)
 * @return true 如果當前玩家獲勝
 * @return false 如果當前玩家未獲勝
 */
bool checkWin(uint16_t boardX, uint16_t boardO, bool playTurn);

/**
 * @brief 輸出棋盤的當前狀態
 *
 * @param board 棋盤的二維陣列表示
 */
void printBoard(uint16_t boardX, uint16_t boardO);

#endif  // GAME_HPP
