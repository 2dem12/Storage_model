#include <string>
#pragma once

class Prod {
public:
    // Конструктор по умолчанию
    Prod()
        : delivery_date_(0), exp_date_(0), priсe_(0), markdown_(0), cnt_packaging_(5), cnt_pack_(10) {}

    // Параметризованный конструктор
    Prod(std::string name, int delivery_date, int exp_date, int price)
        :name_(name), delivery_date_(delivery_date), exp_date_(exp_date), priсe_(price), cnt_pack_((rand() % 100) + 20) {}

    ~Prod() {}

    void change_markdown_(int level) {
        if (level == 1) {
            markdown_ = 10;
        } else if (level == 2) {
            markdown_ = 20;
        }
    }

    std::string name() const {
        return name_;
    }

    int delivery_date() const {
        return delivery_date_;
    }
    int exp_date() const {
        return exp_date_;
    }

    int markdown() const {
        return markdown_;
    }

    int cnt_packaging() const {
        return cnt_packaging_;
    }

    int cnt_pack() const {
        return cnt_pack_;
    }

    int price_md() const {
        return (double)priсe_ - (double)priсe_ * ((double)markdown_ / 100);
    }

    int price_buy() {
        return (double)priсe_ - (double)priсe_ * (30.f / 100.f);
    }

protected:
    std::string name_;
    int delivery_date_; // дата поставки
    int exp_date_; // срок годности
    int markdown_ = 0; // уценка
    int cnt_packaging_; //кол-во упаковок
    int cnt_pack_; // кол-во пачек в упаковке
    int priсe_; // цена
};