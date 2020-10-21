#pragma once

#include <Siv3D.hpp>
#include <common.hpp>

class Title : public App::Scene {
public:

  // �R���X�g���N�^�i�K�������j
  Title(const InitData& init)
    : IScene(init) {

  }

  // �X�V�֐�
  void update() override {
    // ���N���b�N��
    if (MouseL.down()) {
      // �Q�[���V�[���ɑJ��
      changeScene(U"Description");
    }
  }

  // �`��֐� (const �C��)
  void draw() const override {
    Scene::SetBackground(ColorF(0.3, 0.4, 0.5));

    FontAsset(U"TitleFont")(U"Title").drawAt(400, 100);

    Circle(Cursor::Pos(), 50).draw(Palette::Orange);
  }
};
