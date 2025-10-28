int *__fastcall sub_26DBA0(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  int *v7; // r5
  _BYTE *v8; // r6
  int v9; // r4
  int v10; // r8
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int *result; // r0

  v7 = (int *)sub_26BBA8(a1);
  v8 = (_BYTE *)sub_26BCE0(v7);
  v9 = sub_171280(a1);
  v10 = *(_DWORD *)(v9 + 20);
  v11 = sub_170068(v9);
  v12 = ((int (__fastcall *)(int))loc_165BE0)(v11);
  switch ( **(_BYTE **)(v9 + 24) )
  {
    case 1:
    case 0x12:
    case 0x13:
      sub_15AF2C((int)v8, v9);
      result = v7;
      break;
    case 5:
    case 6:
    case 8:
    case 0xC:
    case 0x11:
    case 0x14:
    case 0x15:
      sub_15C374(v8, v10, v12, v13, a3, a4);
      result = v7;
      break;
    case 9:
    case 0x19:
      sub_252944((int)v8, v9, a3, a4);
      result = v7;
      break;
    default:
      sub_94708("Unexpected type (%d) encountered for unsigned integer constant.", **(char **)(v9 + 24));
  }
  return result;
}
