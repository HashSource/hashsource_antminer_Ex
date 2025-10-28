unsigned int __fastcall sub_26D15C(_DWORD *a1, unsigned __int8 *a2)
{
  int v4; // r0
  int v5; // r0
  _BYTE *v6; // r1
  char v8; // r3
  int v9; // r1

  while ( 1 )
  {
    v4 = sub_170068((int)a1);
    v5 = ((int (__fastcall *)(int))loc_165BE0)(v4);
    v6 = (_BYTE *)a1[6];
    switch ( *v6 )
    {
      case 1:
      case 0x12:
      case 0x13:
        return sub_15AED0((int)a2, (int)a1);
      case 5:
      case 6:
      case 8:
      case 0xC:
      case 0x11:
      case 0x14:
      case 0x15:
        v8 = v6[1];
        v9 = a1[5];
        if ( (v8 & 1) != 0 )
          return sub_15C278(a2, v9, v5);
        else
          return sub_15C1B8(a2, v9, v5);
      case 9:
      case 0x19:
        return sub_2528D0((int)a2, (int)a1);
      case 0x17:
        a1 = (_DWORD *)sub_171280(a1);
        break;
      default:
        sub_94708("Value can't be converted to integer.");
    }
  }
}
