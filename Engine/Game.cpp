/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
    :
    wnd( wnd ),
    gfx( wnd ),
    sp( gfx ),
    dud( { 50,40 },{ 0,0 } ),
    rng( std::random_device()() ),
    walls( 0.0f,float( gfx.ScreenWidth ),0.0f,float( gfx.ScreenHeight ) )
{
    for ( int i = 0; i < maxEnemys; ++i )
    {
        std::uniform_real_distribution<float> xPos( 0.0f,gfx.ScreenWidth - eny->getDimanision() );
        std::uniform_real_distribution<float> yPos( 0.0f,gfx.ScreenHeight - eny->getDimanision() );
        std::uniform_real_distribution<float> xMov( -2.5f,2.5f );
        std::uniform_real_distribution<float> yMov( -2.5f,2.5f );
        eny[i].Init( { xPos( rng ),yPos( rng ) },{ xMov( rng ),yMov( rng ) } );
    }
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
    if ( wnd.kbd.KeyIsPressed( VK_UP ) )
    {
        delta_mov = { 0,-1 };
    }
    if ( wnd.kbd.KeyIsPressed( VK_DOWN ) )
    {
        delta_mov = { 0,1 };
    }
    if ( wnd.kbd.KeyIsPressed( VK_LEFT ) )
    {
        delta_mov = { -1,0 };
    }
    if ( wnd.kbd.KeyIsPressed( VK_RIGHT ) )
    {
        delta_mov = { 1,0 };
    }
    if ( wnd.kbd.KeyIsPressed( VK_UP ) && wnd.kbd.KeyIsPressed( VK_LEFT ) || wnd.kbd.KeyIsPressed( VK_UP ) && wnd.kbd.KeyIsPressed( VK_RIGHT ) )
    {
        delta_mov.y = -1;
    }
    if ( wnd.kbd.KeyIsPressed( VK_DOWN ) && wnd.kbd.KeyIsPressed( VK_LEFT ) || wnd.kbd.KeyIsPressed( VK_DOWN ) && wnd.kbd.KeyIsPressed( VK_RIGHT ) )
    {
        delta_mov.y = 1;
    }
    dud.MovBy( delta_mov );
    for ( int i = 0; i < maxEnemys; ++i )
    {
        eny[i].MovBy();
        eny[i].DoWallCollision( walls );
    }
}

void Game::ComposeFrame()
{
    dud.Draw( sp );
    for ( int i = 0; i < maxEnemys; ++i )
    {
        eny[i].Draw( gfx );
    }
}
