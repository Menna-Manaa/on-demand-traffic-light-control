/*
 * bit_manipulation.h
 *
 * Created: 12/22/2022 1:27:49 PM
 *  Author: Menna_Manaa
 */ 


#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_



#define CLEAR_BIT(REG,NUM) REG&=~(1<<NUM)
#define SET_BIT(REG,NUM) REG|=(1<<NUM)
#define TOGGLE_BIT(REG,NUM) REG^=(1<<NUM)
#define READ_BIT(REG,NUM) ((REG&(1<<NUM))>>NUM)

#endif /* BIT_MANIPULATION_H_ */