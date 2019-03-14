	// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/konamigx.cpp"

// Every game here must be added to the table at about line 3800 in src/mame/drivers/konamigx.cpp

// PSmame (c) gaston90 used with permission

 /****************************************************
         Proyecto Shadows Mame Build Plus
*****************************************************/
 
 /*************
 Dragoon Might 
****************/

ROM_START( dragoonas01 )
	ROM_REGION( 0x800000, "maincpu", 0 )
	GX_BIOS
	ROM_LOAD32_WORD_SWAP( "417aab02_ps01.31b", 0x200002, 512*1024, CRC(b391f67e) SHA1(b7066b1aa5906056f84cae4dc639d69768f97d09) )
	ROM_LOAD32_WORD_SWAP( "417aab03_ps01.27b", 0x200000, 512*1024, CRC(3e0eded0) SHA1(7ec68b74271544f3c8690316a3829141c84c03e1) )

	ROM_LOAD32_WORD_SWAP( "417a04.26c", 0x400002, 1024*1024, CRC(dc574747) SHA1(43cbb6a08c27bb96bb25568c3b636c44fff3e08e) )
	ROM_LOAD32_WORD_SWAP( "417a05.23c", 0x400000, 1024*1024, CRC(2ee2c587) SHA1(a1b2b288c375a3406d4b12e66c973484c03fe26e) )

	ROM_REGION( 0x40000, "soundcpu", 0 )
	ROM_LOAD16_BYTE("417a06.9c", 0x000000, 128*1024, CRC(8addbbee) SHA1(fdb38fab1fd65b7362578b108bf6128e926b5f13) )
	ROM_LOAD16_BYTE("417a07.7c", 0x000001, 128*1024, CRC(c1fd7584) SHA1(1b204165ef07b6b53f47adc16eed69d11dab53b2) )

	ROM_REGION( 0x400000, "gfx1", ROMREGION_ERASE00 )
	TILE_WORD_ROM_LOAD( "417a16.17h", 0x000000, 2*1024*1024, CRC(88b2213b) SHA1(ac4ac57618cf98d7486b147f5494e6943bff1a4d) )

	ROM_REGION( 0x1000000, "gfx2", ROMREGION_ERASE00 )
	ROM_LOAD32_WORD( "417a15.25g", 0x000000, 2*1024*1024, CRC(83bccd01) SHA1(c0e65c43115164c3f64ac14a449c65c4e3e3c4cf) )
	ROM_LOAD32_WORD( "417a11.28g", 0x000002, 2*1024*1024, CRC(624a7c4c) SHA1(5fda37cd02b4dcb328b80b29041214c685c77a78) )
	ROM_LOAD32_WORD( "417a14.18h", 0x400000, 2*1024*1024, CRC(fbf551f1) SHA1(871c5804aba9845aa04596db51def3ba3b8bae30) )
	ROM_LOAD32_WORD( "417a10.27g", 0x400002, 2*1024*1024, CRC(18fde49f) SHA1(f85b2981172be2cddc5d691bb803f0133a36cb1a) )
	ROM_LOAD32_WORD( "417a13.20h", 0x800000, 2*1024*1024, CRC(d2e3959d) SHA1(efe516e6b84c67c0a154726a0f7f7054ee866738) )
	ROM_LOAD32_WORD( "417a09.30g", 0x800002, 2*1024*1024, CRC(b5653e24) SHA1(ffa44d6b65feef298fa4dcc064ebd173c7cc22aa) )
	ROM_LOAD32_WORD( "417a12.23h", 0xc00000, 2*1024*1024, CRC(25496115) SHA1(e53164f8ad95187011059c465a67fff1d18ba888) )
	ROM_LOAD32_WORD( "417a08.33g", 0xc00002, 2*1024*1024, CRC(801e9d93) SHA1(9364d802b4ca03e652b25304c8298be8de8936b4) )

	ROM_REGION( 0x200000, "k054539", 0 )
	ROM_LOAD( "417a17.9g", 0x000000, 2*1024*1024, CRC(88d47dfd) SHA1(b5d6dd7ee9ac0c427dc3e714a97945c954260913) )

	ROM_REGION16_BE( 0x80, "eeprom", 0 )
	ROM_LOAD( "dragoona.nv", 0x0000, 0x080, CRC(7980ad2b) SHA1(dccaab02d23edbd81ae13441fbac0dbd7112c258) )
ROM_END

ROM_START( dragoonas02 )
	ROM_REGION( 0x800000, "maincpu", 0 )
	GX_BIOS
	ROM_LOAD32_WORD_SWAP( "417aab02_ps02.31b", 0x200002, 512*1024, CRC(d4e6eace) SHA1(2bfb96e968359d0d9c227f89ad41457e95479b32) )
	ROM_LOAD32_WORD_SWAP( "417aab03_ps02.27b", 0x200000, 512*1024, CRC(bf4598c4) SHA1(d7ec625cf019eb41d5847945b66e9f33d895ec57) )

	ROM_LOAD32_WORD_SWAP( "417a04.26c", 0x400002, 1024*1024, CRC(dc574747) SHA1(43cbb6a08c27bb96bb25568c3b636c44fff3e08e) )
	ROM_LOAD32_WORD_SWAP( "417a05.23c", 0x400000, 1024*1024, CRC(2ee2c587) SHA1(a1b2b288c375a3406d4b12e66c973484c03fe26e) )

	ROM_REGION( 0x40000, "soundcpu", 0 )
	ROM_LOAD16_BYTE("417a06.9c", 0x000000, 128*1024, CRC(8addbbee) SHA1(fdb38fab1fd65b7362578b108bf6128e926b5f13) )
	ROM_LOAD16_BYTE("417a07.7c", 0x000001, 128*1024, CRC(c1fd7584) SHA1(1b204165ef07b6b53f47adc16eed69d11dab53b2) )

	ROM_REGION( 0x400000, "gfx1", ROMREGION_ERASE00 )
	TILE_WORD_ROM_LOAD( "417a16.17h", 0x000000, 2*1024*1024, CRC(88b2213b) SHA1(ac4ac57618cf98d7486b147f5494e6943bff1a4d) )

	ROM_REGION( 0x1000000, "gfx2", ROMREGION_ERASE00 )
	ROM_LOAD32_WORD( "417a15.25g", 0x000000, 2*1024*1024, CRC(83bccd01) SHA1(c0e65c43115164c3f64ac14a449c65c4e3e3c4cf) )
	ROM_LOAD32_WORD( "417a11.28g", 0x000002, 2*1024*1024, CRC(624a7c4c) SHA1(5fda37cd02b4dcb328b80b29041214c685c77a78) )
	ROM_LOAD32_WORD( "417a14.18h", 0x400000, 2*1024*1024, CRC(fbf551f1) SHA1(871c5804aba9845aa04596db51def3ba3b8bae30) )
	ROM_LOAD32_WORD( "417a10.27g", 0x400002, 2*1024*1024, CRC(18fde49f) SHA1(f85b2981172be2cddc5d691bb803f0133a36cb1a) )
	ROM_LOAD32_WORD( "417a13.20h", 0x800000, 2*1024*1024, CRC(d2e3959d) SHA1(efe516e6b84c67c0a154726a0f7f7054ee866738) )
	ROM_LOAD32_WORD( "417a09.30g", 0x800002, 2*1024*1024, CRC(b5653e24) SHA1(ffa44d6b65feef298fa4dcc064ebd173c7cc22aa) )
	ROM_LOAD32_WORD( "417a12.23h", 0xc00000, 2*1024*1024, CRC(25496115) SHA1(e53164f8ad95187011059c465a67fff1d18ba888) )
	ROM_LOAD32_WORD( "417a08.33g", 0xc00002, 2*1024*1024, CRC(801e9d93) SHA1(9364d802b4ca03e652b25304c8298be8de8936b4) )

	ROM_REGION( 0x200000, "k054539", 0 )
	ROM_LOAD( "417a17.9g", 0x000000, 2*1024*1024, CRC(88d47dfd) SHA1(b5d6dd7ee9ac0c427dc3e714a97945c954260913) )

	ROM_REGION16_BE( 0x80, "eeprom", 0 )
	ROM_LOAD( "dragoona.nv", 0x0000, 0x080, CRC(7980ad2b) SHA1(dccaab02d23edbd81ae13441fbac0dbd7112c258) )
ROM_END

ROM_START( dragoonas03 )
	ROM_REGION( 0x800000, "maincpu", 0 )
	GX_BIOS
	ROM_LOAD32_WORD_SWAP( "417aab02_ps03.31b", 0x200002, 512*1024, CRC(38d338b5) SHA1(239802338167b0f7a64d62ad230b46b58af3e46e) )
	ROM_LOAD32_WORD_SWAP( "417aab03_ps03.27b", 0x200000, 512*1024, CRC(520c29ff) SHA1(125feb1526a70bd315cee7aded77547b33d06dcd) )

	ROM_LOAD32_WORD_SWAP( "417a04.26c", 0x400002, 1024*1024, CRC(dc574747) SHA1(43cbb6a08c27bb96bb25568c3b636c44fff3e08e) )
	ROM_LOAD32_WORD_SWAP( "417a05.23c", 0x400000, 1024*1024, CRC(2ee2c587) SHA1(a1b2b288c375a3406d4b12e66c973484c03fe26e) )

	ROM_REGION( 0x40000, "soundcpu", 0 )
	ROM_LOAD16_BYTE("417a06.9c", 0x000000, 128*1024, CRC(8addbbee) SHA1(fdb38fab1fd65b7362578b108bf6128e926b5f13) )
	ROM_LOAD16_BYTE("417a07.7c", 0x000001, 128*1024, CRC(c1fd7584) SHA1(1b204165ef07b6b53f47adc16eed69d11dab53b2) )

	ROM_REGION( 0x400000, "gfx1", ROMREGION_ERASE00 )
	TILE_WORD_ROM_LOAD( "417a16.17h", 0x000000, 2*1024*1024, CRC(88b2213b) SHA1(ac4ac57618cf98d7486b147f5494e6943bff1a4d) )

	ROM_REGION( 0x1000000, "gfx2", ROMREGION_ERASE00 )
	ROM_LOAD32_WORD( "417a15.25g", 0x000000, 2*1024*1024, CRC(83bccd01) SHA1(c0e65c43115164c3f64ac14a449c65c4e3e3c4cf) )
	ROM_LOAD32_WORD( "417a11.28g", 0x000002, 2*1024*1024, CRC(624a7c4c) SHA1(5fda37cd02b4dcb328b80b29041214c685c77a78) )
	ROM_LOAD32_WORD( "417a14.18h", 0x400000, 2*1024*1024, CRC(fbf551f1) SHA1(871c5804aba9845aa04596db51def3ba3b8bae30) )
	ROM_LOAD32_WORD( "417a10.27g", 0x400002, 2*1024*1024, CRC(18fde49f) SHA1(f85b2981172be2cddc5d691bb803f0133a36cb1a) )
	ROM_LOAD32_WORD( "417a13.20h", 0x800000, 2*1024*1024, CRC(d2e3959d) SHA1(efe516e6b84c67c0a154726a0f7f7054ee866738) )
	ROM_LOAD32_WORD( "417a09.30g", 0x800002, 2*1024*1024, CRC(b5653e24) SHA1(ffa44d6b65feef298fa4dcc064ebd173c7cc22aa) )
	ROM_LOAD32_WORD( "417a12.23h", 0xc00000, 2*1024*1024, CRC(25496115) SHA1(e53164f8ad95187011059c465a67fff1d18ba888) )
	ROM_LOAD32_WORD( "417a08.33g", 0xc00002, 2*1024*1024, CRC(801e9d93) SHA1(9364d802b4ca03e652b25304c8298be8de8936b4) )

	ROM_REGION( 0x200000, "k054539", 0 )
	ROM_LOAD( "417a17.9g", 0x000000, 2*1024*1024, CRC(88d47dfd) SHA1(b5d6dd7ee9ac0c427dc3e714a97945c954260913) )

	ROM_REGION16_BE( 0x80, "eeprom", 0 )
	ROM_LOAD( "dragoona.nv", 0x0000, 0x080, CRC(7980ad2b) SHA1(dccaab02d23edbd81ae13441fbac0dbd7112c258) )
ROM_END

ROM_START( dragoonas04 )
	ROM_REGION( 0x800000, "maincpu", 0 )
	GX_BIOS
	ROM_LOAD32_WORD_SWAP( "417aab02_ps04.31b", 0x200002, 512*1024, CRC(5fa42405) SHA1(0335d3a5aba5e02eb7383b5ae7e45aec0677e905) )
	ROM_LOAD32_WORD_SWAP( "417aab03_ps04.27b", 0x200000, 512*1024, CRC(d3476feb) SHA1(fdd5818e80e8cd1e72c88b1b015abe071354ee4a) )

	ROM_LOAD32_WORD_SWAP( "417a04.26c", 0x400002, 1024*1024, CRC(dc574747) SHA1(43cbb6a08c27bb96bb25568c3b636c44fff3e08e) )
	ROM_LOAD32_WORD_SWAP( "417a05.23c", 0x400000, 1024*1024, CRC(2ee2c587) SHA1(a1b2b288c375a3406d4b12e66c973484c03fe26e) )

	ROM_REGION( 0x40000, "soundcpu", 0 )
	ROM_LOAD16_BYTE("417a06.9c", 0x000000, 128*1024, CRC(8addbbee) SHA1(fdb38fab1fd65b7362578b108bf6128e926b5f13) )
	ROM_LOAD16_BYTE("417a07.7c", 0x000001, 128*1024, CRC(c1fd7584) SHA1(1b204165ef07b6b53f47adc16eed69d11dab53b2) )

	ROM_REGION( 0x400000, "gfx1", ROMREGION_ERASE00 )
	TILE_WORD_ROM_LOAD( "417a16.17h", 0x000000, 2*1024*1024, CRC(88b2213b) SHA1(ac4ac57618cf98d7486b147f5494e6943bff1a4d) )

	ROM_REGION( 0x1000000, "gfx2", ROMREGION_ERASE00 )
	ROM_LOAD32_WORD( "417a15.25g", 0x000000, 2*1024*1024, CRC(83bccd01) SHA1(c0e65c43115164c3f64ac14a449c65c4e3e3c4cf) )
	ROM_LOAD32_WORD( "417a11.28g", 0x000002, 2*1024*1024, CRC(624a7c4c) SHA1(5fda37cd02b4dcb328b80b29041214c685c77a78) )
	ROM_LOAD32_WORD( "417a14.18h", 0x400000, 2*1024*1024, CRC(fbf551f1) SHA1(871c5804aba9845aa04596db51def3ba3b8bae30) )
	ROM_LOAD32_WORD( "417a10.27g", 0x400002, 2*1024*1024, CRC(18fde49f) SHA1(f85b2981172be2cddc5d691bb803f0133a36cb1a) )
	ROM_LOAD32_WORD( "417a13.20h", 0x800000, 2*1024*1024, CRC(d2e3959d) SHA1(efe516e6b84c67c0a154726a0f7f7054ee866738) )
	ROM_LOAD32_WORD( "417a09.30g", 0x800002, 2*1024*1024, CRC(b5653e24) SHA1(ffa44d6b65feef298fa4dcc064ebd173c7cc22aa) )
	ROM_LOAD32_WORD( "417a12.23h", 0xc00000, 2*1024*1024, CRC(25496115) SHA1(e53164f8ad95187011059c465a67fff1d18ba888) )
	ROM_LOAD32_WORD( "417a08.33g", 0xc00002, 2*1024*1024, CRC(801e9d93) SHA1(9364d802b4ca03e652b25304c8298be8de8936b4) )

	ROM_REGION( 0x200000, "k054539", 0 )
	ROM_LOAD( "417a17.9g", 0x000000, 2*1024*1024, CRC(88d47dfd) SHA1(b5d6dd7ee9ac0c427dc3e714a97945c954260913) )

	ROM_REGION16_BE( 0x80, "eeprom", 0 )
	ROM_LOAD( "dragoona.nv", 0x0000, 0x080, CRC(7980ad2b) SHA1(dccaab02d23edbd81ae13441fbac0dbd7112c258) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Dragoon Might
GAME( 200?, dragoonas01,  dragoona, dragoonj,      dragoonj, konamigx_state, init_posthack, ROT0, "DDJ", "Dragoon Might (Always Have Super Move)(ver AAB)", 0 )
GAME( 200?, dragoonas02,  dragoona, dragoonj,      dragoonj, konamigx_state, init_posthack, ROT0, "DDJ", "Dragoon Might (Easy Move)(ver AAB)", 0 )
GAME( 200?, dragoonas03,  dragoona, dragoonj,      dragoonj, konamigx_state, init_posthack, ROT0, "DDJ", "Dragoon Might (Enable Hidden Character)(ver AAB)", 0 )
GAME( 200?, dragoonas04,  dragoona, dragoonj,      dragoonj, konamigx_state, init_posthack, ROT0, "Unknown", "Dragoon Might (Description Unknown)(ver AAB)", 0 )

