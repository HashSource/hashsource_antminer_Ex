int __fastcall lzo1f_1_compress(unsigned __int8 *a1, unsigned int a2, _BYTE *a3, unsigned int *a4, int a5)
{
  _BYTE *v6; // r4
  unsigned __int8 *v8; // r12
  _BYTE *v9; // r3
  unsigned __int8 *v10; // r1
  char v11; // t1
  unsigned int v12; // lr
  int result; // r0

  v6 = a3;
  if ( !a2 )
  {
    *a4 = 0;
LABEL_7:
    *v6 = -31;
    result = 0;
    v6[1] = 0;
    v6[2] = 0;
    *a4 += 3;
    return result;
  }
  if ( a2 <= 0xA )
  {
    v8 = a1;
    v9 = a3;
    v10 = &a1[a2];
    *a3 = a2;
    do
    {
      v11 = *v8++;
      *++v9 = v11;
    }
    while ( v8 != v10 );
    v12 = a2 + 1;
    v6 = &a3[v12];
    *a4 = v12;
    goto LABEL_7;
  }
  result = sub_2220C(a1, a2, (unsigned int)a3, a4, a5);
  if ( !result )
  {
    v6 += *a4;
    goto LABEL_7;
  }
  return result;
}
