//********************************************************
//
/************* Fiber 4  **************/
//
//********************************************************

/********* Card 6 *********/
SIGNAL(ZERO_SUPPRESS_MULTI(10): fiberfour6t1);
SIGNAL(fiberfour6t1, fiber.fi4[0].t[0],
       fiberfour6t16,fiber.fi4[0].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(10): fiberfour6E1);
SIGNAL(fiberfour6E1 ,fiber.fi4[0].E[0],
       fiberfour6E16,fiber.fi4[0].E[15],DATA32);

/********* Card 7 *********/
SIGNAL(ZERO_SUPPRESS_MULTI(10): fiberfour7t1);
SIGNAL(fiberfour7t1, fiber.fi4[1].t[0],
       fiberfour7t16,fiber.fi4[1].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(10): fiberfour7E1);
SIGNAL(fiberfour7E1 ,fiber.fi4[1].E[0],
       fiberfour7E16,fiber.fi4[1].E[15],DATA32);

/********* Card 8 *********/
SIGNAL(ZERO_SUPPRESS_MULTI(10): fiberfour8t1);
SIGNAL(fiberfour8t1, fiber.fi4[2].t[0],
       fiberfour8t16,fiber.fi4[2].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(10): fiberfour8E1);
SIGNAL(fiberfour8E1 ,fiber.fi4[2].E[0],
       fiberfour8E16,fiber.fi4[2].E[15],DATA32);

/********* Card 9 *********/
SIGNAL(ZERO_SUPPRESS_MULTI(10): fiberfour9t1);
SIGNAL(fiberfour9t1, fiber.fi4[3].t[0],
       fiberfour9t16,fiber.fi4[3].t[15],DATA12);
SIGNAL(ZERO_SUPPRESS_MULTI(10): fiberfour9E1);
SIGNAL(fiberfour9E1 ,fiber.fi4[3].E[0],
       fiberfour9E16,fiber.fi4[3].E[15],DATA32); 

