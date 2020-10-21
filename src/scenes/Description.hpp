#pragma once

#include <Siv3D.hpp>
#include <common.hpp>

class Description : public App::Scene
{
public:

    // �R���X�g���N�^�i�K�������j
    Description(const InitData& init)
        : IScene(init)
    {

    }

    // �X�V�֐�
    void update() override
    {
        // ���N���b�N��
        if (MouseL.down())
        {
            // �Q�[���V�[���ɑJ��
            changeScene(U"Game");
        }
    }

    // �`��֐� (const �C��)
    void draw() const override
    {
        Scene::SetBackground(ColorF(0.3, 0.4, 0.5));

        FontAsset(U"TitleFont")(U"Description").drawAt(400, 100);

        Circle(Cursor::Pos(), 50).draw(Palette::Orange);
    }
};