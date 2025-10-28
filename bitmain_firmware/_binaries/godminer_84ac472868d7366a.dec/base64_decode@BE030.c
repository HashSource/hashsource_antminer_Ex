char *__fastcall base64_decode(char *result, int a2, int a3)
{
  int v3; // r10
  char *v6; // r6
  int v7; // r7
  int v8; // r4
  int v9; // r2
  int v10; // r5
  char *v11; // r1
  int v12; // r3
  int v13; // r4
  int v14; // t1
  int v15; // r2
  int v16; // r1
  int v17; // r3
  int v18; // t1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r5
  int v23; // t1
  int v24; // r5
  int v25; // r2
  int v26; // r1
  int v27; // r3
  int v28; // t1

  v3 = a3 - 1;
  if ( a3 - 1 > 0 )
  {
    v6 = result;
    v7 = 0;
    do
    {
      if ( a3 > v7 )
      {
        v9 = *(unsigned __int8 *)(a2 + v7);
        v10 = v7 + 1;
        if ( v9 == 65 )
        {
          v8 = 0;
        }
        else
        {
          v11 = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
          v12 = 66;
          v13 = 1;
          while ( 1 )
          {
            if ( v9 == v12 )
            {
              v8 = (v13 << 18) & 0xFC0000;
              goto LABEL_12;
            }
            if ( ++v13 == 65 )
              break;
            v14 = (unsigned __int8)*++v11;
            v12 = v14;
          }
          v8 = 16515072;
          result = (char *)printf("%s (%02x) failed!\n\n", "base64_decode_value", v9);
        }
LABEL_12:
        if ( a3 <= v10 )
          goto LABEL_42;
        v15 = *(unsigned __int8 *)(a2 + v10);
        v10 = v7 + 2;
        if ( v15 != 65 )
        {
          result = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
          v16 = 66;
          v17 = 1;
          while ( 1 )
          {
            if ( v15 == v16 )
            {
              v8 |= (v17 << 12) & 0x3F000;
              goto LABEL_19;
            }
            if ( ++v17 == 65 )
              break;
            v18 = (unsigned __int8)*++result;
            v16 = v18;
          }
          v8 |= 0x3F000u;
          result = (char *)printf("%s (%02x) failed!\n\n", "base64_decode_value", v15);
        }
LABEL_19:
        if ( a3 <= v10 )
        {
LABEL_42:
          v7 = v10;
        }
        else
        {
          v19 = *(unsigned __int8 *)(a2 + v10);
          v20 = v7 + 3;
          if ( v19 == 65 )
          {
            v24 = 0;
          }
          else
          {
            result = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
            v21 = 66;
            v22 = 1;
            while ( 1 )
            {
              if ( v19 == v21 )
              {
                v24 = ((_WORD)v22 << 6) & 0xFC0;
                goto LABEL_26;
              }
              if ( ++v22 == 65 )
                break;
              v23 = (unsigned __int8)*++result;
              v21 = v23;
            }
            v24 = 4032;
            result = (char *)printf("%s (%02x) failed!\n\n", "base64_decode_value", v19);
            v20 = v7 + 3;
          }
LABEL_26:
          if ( a3 > v20 )
          {
            v25 = *(unsigned __int8 *)(a2 + v20);
            v7 += 4;
            if ( v25 != 65 )
            {
              result = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
              v26 = 66;
              v27 = 1;
              while ( 1 )
              {
                if ( v25 == v26 )
                {
                  v24 |= v27 & 0x3F;
                  goto LABEL_34;
                }
                if ( ++v27 == 65 )
                  break;
                v28 = (unsigned __int8)*++result;
                v26 = v28;
              }
              v24 |= 0x3Fu;
              result = (char *)printf("%s (%02x) failed!\n\n", "base64_decode_value", v25);
            }
LABEL_34:
            v8 += v24;
          }
          else
          {
            v8 += v24;
            v7 = v20;
          }
        }
      }
      else
      {
        v8 = 0;
      }
      v6[2] = v8;
      *v6 = BYTE2(v8);
      v6[1] = BYTE1(v8);
      v6 += 3;
    }
    while ( v7 < v3 );
  }
  return result;
}
