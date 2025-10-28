void *__fastcall sub_301798(int a1, int a2)
{
  int v2; // r0

  if ( a2 == 556 )
  {
    v2 = sub_2A67CC(a1);
    if ( v2 == 32 )
    {
      return &unk_41DDC4;
    }
    else if ( v2 == 64 )
    {
      sub_2A6BE4("reloc.c", 7998);
      return 0;
    }
    else
    {
      if ( v2 == 16 )
        sub_2A6BE4("reloc.c", 8003);
      else
        sub_2A6BE4("reloc.c", 8006);
      return 0;
    }
  }
  else
  {
    sub_2A6BE4("reloc.c", 8010);
    return 0;
  }
}
