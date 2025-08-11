/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:50:59 by aborges           #+#    #+#             */
/*   Updated: 2025/06/16 15:09:39 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string ft_replace(std::string linha, std::string str1, std::string str2)
{
    std::string nova_linha = "";
    size_t      pos = 0;
    size_t      pos_inicio = 0;
    static const size_t npos = -1;

    while ((pos = linha.find(str1, pos_inicio)) != npos)
    {
        nova_linha += linha.substr(pos_inicio, pos - pos_inicio);
        nova_linha += str2;
        pos_inicio = pos + str1.length();
    }
    nova_linha += linha.substr(pos_inicio);
    return (nova_linha);
}

int main(int argc, char **argv)
{
    std::string     linha;
    std::ifstream   arquivo_in;
    std::ofstream   arquivo_ou;
    std::string     novo_arquivo;
    std::string     nova_linha;

    if (argc != 4)
    {
        std::cout << "Necessário 4 argumentos: ./program ficheiro str1 str2" << std::endl;
        return (1);
    }   
    arquivo_in.open(argv[1]);
    if (arquivo_in.is_open())
    {        
        novo_arquivo =  argv[1];
        novo_arquivo = novo_arquivo.substr(0, novo_arquivo.find('.')) + ".replace";

        arquivo_ou.open(novo_arquivo.c_str());
        if (arquivo_ou.is_open())
        {
            while (!arquivo_in.eof())
            {
                std::getline(arquivo_in, linha);
                nova_linha = ft_replace(linha, argv[2], argv[3]);
                arquivo_ou << nova_linha << std::endl;
            }
            arquivo_ou.close();
        }
        else
        {
            std::cout << "Erro ao abrir ou cria arquivo replace arquivo" << std::endl;
            return (1);
        }   
        arquivo_in.close();
    }
    else
    {
        std::cout << "Erro ao abrir o arquivo" << std::endl;
        return (1);
    }
    return (0);
}