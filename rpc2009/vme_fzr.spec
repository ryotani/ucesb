#define VME_FZR VME_FZR

VME_FZR( )
{
  MEMBER(DATA32 data[32]);

  
  list(0<=index<32)
    {
      UINT32 ch_data NOENCODE
        {
          0_31:  value;

          ENCODE(data[index],(value=value));
        }
    }

}
