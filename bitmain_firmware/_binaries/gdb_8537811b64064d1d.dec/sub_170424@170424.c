char *__fastcall sub_170424(int a1, char a2)
{
  if ( (a2 & 4) != 0 )
    return "code";
  if ( (a2 & 8) != 0 )
    return "data";
  if ( (a2 & 0x30) == 0 )
    return 0;
  if ( ((int (*)(void))loc_16ACD4)() )
    JUMPOUT(0x16AD20);
  return 0;
}
