void sub_27E76C()
{
  int v0; // r0
  int v1; // r6
  int v2; // r5
  int v3; // r5

  if ( dword_48AA74 )
  {
    if ( !sub_98FA0(&dword_4878EC, &dword_475848) )
    {
      v0 = sub_1836B0();
      v1 = sub_27E2C0(v0);
      sub_259F38("Inferior's terminal status (currently saved by GDB):\n");
      v2 = *(_DWORD *)(v1 + 12);
      sub_259F38("File descriptor flags = ");
      switch ( v2 & 3 )
      {
        case 1:
          sub_259F38("O_WRONLY");
          break;
        case 2:
          sub_259F38("O_RDWR");
          break;
        case 0:
          sub_259F38("O_RDONLY");
          break;
      }
      if ( (v2 & 0x800) != 0 )
        sub_259F38(" | O_NONBLOCK");
      if ( (v2 & 0x400) != 0 )
        sub_259F38(" | O_APPEND");
      if ( (v2 & 0xFFFFF3FC) != 0 )
        sub_259F38(" | 0x%x", v2 & 0xFFFFF3FC);
      sub_259F38((char *)&word_356660);
      sub_259F38("Process group = %d\n", *(_DWORD *)(v1 + 8));
      v3 = dword_48AA78;
      sub_242FB4();
      sub_1FE114(v3);
    }
  }
  else
  {
    sub_259F38("This GDB does not control a terminal.\n");
  }
}
