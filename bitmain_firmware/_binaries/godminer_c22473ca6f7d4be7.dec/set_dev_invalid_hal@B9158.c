_DWORD *__fastcall set_dev_invalid_hal(int a1)
{
  int *v1; // r2
  int v2; // r3
  int v3; // r1
  _DWORD *result; // r0

  LOWORD(v1) = -14664;
  LOWORD(v2) = -10948;
  HIWORD(v1) = (unsigned int)&unk_16B4C8 >> 16;
  HIWORD(v2) = (unsigned int)&unk_16C33C >> 16;
  v3 = *v1;
  result = (_DWORD *)(v2 + 8 * a1);
  *((_BYTE *)result + 4) = 0;
  *v1 = v3 - 1;
  return result;
}
