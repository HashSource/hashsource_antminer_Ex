void *__fastcall sub_26DA10(_BYTE *a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r3
  void *result; // r0

  v8 = sub_170068((int)a2);
  v9 = ((int (__fastcall *)(int))loc_165BE0)(v8);
  v10 = sub_171280(a2);
  switch ( **(_BYTE **)(v10 + 24) )
  {
    case 1:
    case 0x12:
    case 0x13:
      result = sub_15AF2C((int)a1, v10);
      break;
    case 5:
    case 6:
    case 8:
    case 0xC:
    case 0x11:
    case 0x14:
    case 0x15:
      result = sub_15C310(a1, *(_DWORD *)(v10 + 20), v9, v11, a3, a4);
      break;
    case 9:
    case 0x19:
      result = (void *)sub_252900((int)a1, v10, a3, a4);
      break;
    default:
      sub_94708("Unexpected type (%d) encountered for integer constant.", **(char **)(v10 + 24));
  }
  return result;
}
